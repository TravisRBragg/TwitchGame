R66_EXPORT void R66Api_GetAuthState(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedNone* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_GetAuthenticationInfo(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_LogOut(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedNone* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_GetMyUserInfo(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedNone* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_GetUserInfoById(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_GetUserInfoByLoginName(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_GetMyStreamInfo(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedNone* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_QueryStreams(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedStreamQuery* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_CheckUserSubscription(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_CreateClip(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainBool* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_CreateStreamMarker(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_CreatePoll(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPollDefinition* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForPollUpdate(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_EndPoll(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEndPollRequest* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_UnsubscribeFromPoll(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_CreatePrediction(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPredictionDefinition* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForPredictionUpdate(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_EndPrediction(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEndPredictionRequest* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_UnsubscribeFromPrediction(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedPlainString* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_ModifyChannelInformation(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedModifyChannelInfoRequest* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_GetBitsLeaderboard(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedBitsLeaderboardRequest* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_ReplaceCustomRewards(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedCustomRewardList* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_ResolveCustomReward(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedCustomRewardResolveRequest* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_SubscribeToEventStream(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamRequest* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForChannelSubscribeEvent(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForChannelFollowEvent(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForChannelCheerEvent(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForCustomRewardEvent(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForHypeTrainEvent(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_WaitForChannelRaidEvent(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_CloseEventStream(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedEventStreamDesc* p, R66::Marshalling::TaskCallback cb, void* pl);
R66_EXPORT void R66Api_PrepareShutdown(std::shared_ptr<R66::R66Api>* api, const R66::Marshalling::ManagedNone* p, R66::Marshalling::TaskCallback cb, void* pl);