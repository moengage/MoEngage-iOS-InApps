// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let version = "6.00.2"
let checksum = "e58a9e779c104eff69fbfa90b74478c5a45bbc734c982ba961d4af5578bafdb1"
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
