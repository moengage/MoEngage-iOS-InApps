# MoEngageInApps 
=============================

## Change Log:

### Version 4.15.0 *(27th February 2024)*
-------------------------------------------
* Refactored network layer.
* Refactored data tracking.
* Refactored logging.
* Added support for Non-Intrusive InApps.

### Version 4.14.1 *(9th February 2024)*
-------------------------------------------
* BugFix - Fixed HTML InApps leaking.

### Version 4.14.0 *(23rd January 2024)*
-------------------------------------------
* Added privacy manifest file
* Added Code signature support for XCFrameworks.

### Version 4.13.0 *(30th November 2023)*
-------------------------------------------
* Updated hashing algorithm usages to SHA256.

### Version 4.12.0 *(15th November 2023)*
-------------------------------------------
* Added self-handled inapps for tvOS.
* Added OR condition support for trigger events.

### Version 4.11.2 *(26th September 2023)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 9.12.0. 

### Version 4.11.1 *(12th September 2023)*
-------------------------------------------
* Added delayed InApps support.
* Updated the dependency to MoEngage-iOS-SDK 9.11.1. 

### Version 4.11.0 *(30th August 2023)*
-------------------------------------------
* BugFix: Fixed the boolean value tracked as 0/1 in HTML InApp
* BugFix: Fixed API failure tracked when campaign is paused.
* Updated the dependency to MoEngage-iOS-SDK 9.11.0. 

### Version 4.10.0 *(18th July 2023)*
-------------------------------------------
* iOS breakpoint issue fix by changing the config settings.
* CrashFix: Fixed crash by handling the nil value.

### Version 4.9.0 *(20th June 2023)*
-------------------------------------------
* iOS breakpoint issue fix by creating framework from Xcode 14.3.1.

### Version 4.8.3 *(02th June 2023)*
-------------------------------------------
* Bugfix: Handled the callback for selfHandled InApp when called before sync API.
  
### Version 4.8.2 *(25th May 2023)*
-------------------------------------------
* Additional null check for fetching general in-apps

### Version 4.8.1 *(12th May 2023)*
-------------------------------------------
* Fixed crash caused by completion handler

### Version 4.8.0 *(4th May 2023)*
-------------------------------------------
* Updated the deployment target to 11.0.
* Added support for API and Storage Encryption.

### Version 4.7.0 *(17th April 2023)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 9.7.0.

### Version 4.6.0 *(11th April 2023)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 9.6.0.
* Internal Code optimizations.

### Version 4.5.0 *(22nd February 2023)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 9.5.0.

### Version 4.4.0 *(6th February 2023)*
-------------------------------------------
* BugFix - Handled sms action when message contains space
* Code optimization.

### Version 4.3.1 *(1st February 2023)*
-------------------------------------------
* Fixed the validation condition to consider non-expired campaigns for displaying.

### Version 4.3.0 *(25th January 2023)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 9.3.0.

### Version 4.2.2 *(24th January, 2023)*
-------------------------------------------
* CrashFix: Fixed the crash by handling `NULL` in inapp timestamp.

### Version 4.2.1 *(20th January, 2023)*
-------------------------------------------
* CrashFix: Fixed the migration crash for inapp stats.

### Version 4.2.0 *(28th December, 2022)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 9.2.0.

### Version 4.1.0 *(13th December, 2022)*
-------------------------------------------
* Added dSYM file support for debugging.

### Version 4.0.1 *(8th December, 2022)*
-------------------------------------------
* BugFix - Fixed duplicate events being tracked for inapps.

### Version 4.0.0 *(7th December, 2022)*
-------------------------------------------
* Migrated `MoEngageInApp`, `MoEngageInAppCampaign`,`MoEngageInAppSelfHandledCampaign`,`MoEngageInAppAction`,`MoEngageInAppNativeDelegate`  from Objective-C to Swift
* Added API documentation.
* All the classes and modules are prefixed with `MoEngage`.
* BugFix - Fixed Inapp getting auto dismissed before the auto dismiss interval expires.

### Version 3.4.1 *(21st October, 2022)*
-------------------------------------------
* Added support to take safeArea inset for Applications with SceneDelegate.

### Version 3.4.0 *(18th October, 2022)*
-------------------------------------------
* Added support to take the custom inset for inapp nudge in `MOSDKConfig` using `MoEngageInAppConfig` class.

### Version 3.3.1 *(22nd September, 2022)*
-------------------------------------------
* Handled dataType mismatch in `trackDismiss` of HTML InApp.

### Version 3.3.0 *(20th July, 2022)*
-------------------------------------------
* Updated the dependency to MoEngage-iOS-SDK 8.3.0

### Version 3.2.1 *(22nd June, 2022)*
-------------------------------------------
* Fixed the lldb issue when integrating MoEngage-iOS-SDK to Swift application.

### Version 3.2.0 *(7th June, 2022)*
-------------------------------------------

* Changes to support App version, SDK version and platform in the trigger condition of InApps.
* Updated the dependency to MoEngage-iOS-SDK 8.2.0.
* Renamed the module to MoEngageInApps.
* Provided  Swift Package manager support to install the SDK.
* BugFix : Fixed the parsing error in InApp payload due to datatype mismatch.

### Version 2.2.0  *(29th December, 2021)*
-------------------------------------------
*  Added `Capacitor` integration type.

### Version 2.1.2  *(29th December, 2021)*
-------------------------------------------
*  Assigned the InApp version to a constant , in order to avoid the wrong version getting tracked.

### Version 2.1.1  *(25nd December, 2021)*
-------------------------------------------
* BugFix: Handled multiline text in text widget getting clipped in few of the devices.

### Version 2.1.0  *(27th August, 2021)*
-------------------------------------------
* Releasing module as XCFramework.
* HTML InApp Support Added.
* Delivery Funnel implementation for InApps.
* Handling of Control Group Error in InApps.
* Campaign Context tracking for inApp Stats.

### Version 2.0.4  *(5th August, 2021)*
-------------------------------------------
* Image resource, deeplinks and richlanding URLs are percentage encoded if not already and then processed.

### Version 2.0.2  *(25th February, 2021)*
-------------------------------------------
* Provided dismiss callback for Nudges.

### Version 2.0.1  *(10th February, 2021)*
-------------------------------------------
* MoEngage-iOS-SDK Dependency updates

### Version 2.0.0  *(18th January, 2021)*
-------------------------------------------
* Changes to support  MoEngage-iOS-SDK 7.0.0
* InApp exit animation fixes.

### Version 1.1.0  *(17th December, 2020)*
-------------------------------------------
* Changes to support  `enableSDK()` and `disableSDK()` methods for blocking/unblocking SDK features

### Version 1.0.2  *(2nd November, 2020)*
-------------------------------------------
* Xcode 12 Build settings changes to exclude arm64 architecture for Simulator.

### Version 1.0.1 *(2nd July, 2020)*
-------------------------------------------
* BugFix: InApp exit animation was not being applied correctly.

### Version 1.0.0  *(21st February, 2020)*
-------------------------------------------
* Main SDK Rearchitected and has been split into 5 modules now i.e, `MoEngageCore`, `MOAnalytics`, `MOMessaging`, `MOInApp` and `MoEngage`(Umbrella framework).
* InApp Module completely revamped, and has to be integrated separately now. Most of the APIs have changed, therefore refer to this [doc](https://docs.moengage.com/docs/in-app-nativ) to reintegrate the module to the project.

