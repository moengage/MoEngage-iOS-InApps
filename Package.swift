// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MoEngageInApps",
    products: [
        .library(
            name: "MoEngageInApps",
            targets: ["MoEngageInAppSPM","MoEngageInApps"]),
    ],
    dependencies: [
        .package(url: "https://github.com/moengage/MoEngage-iOS-SDK.git", "9.16.1"..<"9.17.0"),
        .package(url:"https://github.com/moengage/ios-trigger-evalutor", "1.00.0"..<"1.01.0"),
    ],
    targets: [
        .target(name: "MoEngageInAppSPM", dependencies: ["MoEngage-iOS-SDK",.product(name: "MoEngageTriggerEvaluator", package: "ios-trigger-evalutor")], path: "Sources/..",exclude: ["MoEngageInApp.podspec", "README.md","./Frameworks/MoEngageInApps.xcframework", "LICENSE","CHANGELOG.md","Images/moe_logo_blue.png"]),
        .binaryTarget(name: "MoEngageInApps",path: "./Frameworks/MoEngageInApps.xcframework")
    ]
)
