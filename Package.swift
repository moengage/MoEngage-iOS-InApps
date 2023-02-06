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
        .package(name: "MoEngage-iOS-SDK",url: "https://github.com/moengage/MoEngage-iOS-SDK.git", from: "9.4.0"),
    ],
    targets: [
        .target(name: "MoEngageInAppSPM", dependencies: ["MoEngage-iOS-SDK"], path: "Sources/..",exclude: ["MoEngageInApp.podspec", "README.md","./Frameworks/MoEngageInApps.xcframework", "LICENSE","CHANGELOG.md","Images/moe_logo_blue.png"]),
        .binaryTarget(name: "MoEngageInApps",path: "./Frameworks/MoEngageInApps.xcframework")
    ]
)
