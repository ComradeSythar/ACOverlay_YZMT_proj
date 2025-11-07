class SymptomACOverlay_YZMT extends SymptomBase
{
	void SymptomACOverlay_YZMT()
	{
		m_SymptomType = SymptomType.PRIMARY;
		m_ID = ACOverlaySymptoms.SYMPTOM_ACOverlay_YZMT;
	}

	override void OnGetActivated(PlayerBase player)
	{
		super.OnGetActivated(player);

		auto requester = PPERequesterBank.GetRequester(PPERequester_ACOverlay_YZMT);
		if (requester)
		{
			requester.Start();
		}
	}

	override void OnGetDeactivated(PlayerBase player)
	{
		super.OnGetDeactivated(player);

		auto requester = PPERequesterBank.GetRequester(PPERequester_ACOverlay_YZMT);
		if (requester)
		{
			requester.Stop();
		}
	}

	override bool CanActivate()
	{
		return true;
	}

	override bool CanDeactivate()
	{
		return false;
	}

	override string GetDebugText()
	{
		return "ACOverlay_YZMT PPE symptom active";
	}
}