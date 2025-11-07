class PPERequester_ACOverlay_YZMT extends PPERequester_GameplayBase
{
	autoptr array<float> m_OverlayColor1_YZMT = { 0.5, 0.0, 0.0, 0 }; // Red tint, no alpha

	override protected void OnStart(Param par = null)
	{
		super.OnStart();

		SetTargetValueColor(
			PostProcessEffectType.Glow,
			PPEGlow.PARAM_COLORIZATIONCOLOR,
			m_OverlayColor1_YZMT,
			PPEGlow.ACOVERLAY_LAYER1,
			PPOperators.ADD
		);
	}

	override protected void OnStop(Param par = null)
	{
		// No fade logic — effect is always active while symptom is applied
	}
}