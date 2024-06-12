// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let version = "6.00.3"
let checksum = "e7819a44d299e965982fb82f843df63694b6d9eddb6132d735fe577ce5c81365"
let package = Package(
    name: "MoEngageInApps",
    platforms: [.iOS(.v11), .tvOS(.v11)],
    products: [
        .library(
            name: "MoEngageInApps",
            targets: ["MoEngageInAppSPM","MoEngageInApps"]),
    ],
    dependencies: [
        .package(url: "https://github.com/moengage/MoEngage-iOS-SDK.git", "9.17.1"..<"9.18.0"),
        .package(url:"https://github.com/moengage/ios-trigger-evalutor", "1.01.0"..<"1.02.0"),
    ],
    targets: [
        .target(name: "MoEngageInAppSPM", dependencies: ["MoEngage-iOS-SDK",.product(name: "MoEngageTriggerEvaluator", package: "ios-trigger-evalutor")], path: "Sources/..",exclude: ["MoEngageInApp.podspec", "README.md", "LICENSE","CHANGELOG.md","Images/moe_logo_blue.png"]),
        .binaryTarget(name: "MoEngageInApps", url: "https://github.com/moengage/MoEngage-iOS-InApps/releases/download/\(version)/MoEngageInApps.xcframework.zip", checksum: checksum)
    ],
    swiftLanguageVersions: [.v5]
)
