class ModifierACOverlay_YZMT extends ModifierBase
{
	override void Init()
	{
		m_TrackActivatedTime = false;
		m_ID = eACOverlayModifiers.MDF_ACOverlay_YZMT;
		m_TickIntervalInactive = 5;
		m_TickIntervalActive = 5;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return true;
	}

	override bool DeactivateCondition(PlayerBase player)
	{
		return false;
	}

	override void OnActivate(PlayerBase player)
	{
		super.OnActivate(player);
		player.m_SymptomManager.QueueUpPrimarySymptom(ACOverlaySymptoms.SYMPTOM_ACOverlay_YZMT);
	}

	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
}