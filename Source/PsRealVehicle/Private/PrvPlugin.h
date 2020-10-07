// Copyright 2016 Pushkin Studio. All Rights Reserved.

#pragma once

#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MINOR_VERSION >= 15
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#else
#include "CoreUObject.h"
#include "Engine.h"
#endif

#include "Net/UnrealNetwork.h"

// Stats not for shipping
#if UE_BUILD_SHIPPING
#define PRV_CYCLE_COUNTER(Stat)
#else
#define PRV_CYCLE_COUNTER(Stat) SCOPE_CYCLE_COUNTER(Stat)
#endif

DECLARE_STATS_GROUP(TEXT("Prv Movement"), STATGROUP_MovementPhysics, STATCAT_Advanced);

DECLARE_LOG_CATEGORY_EXTERN(LogPrvVehicle, Log, All);
