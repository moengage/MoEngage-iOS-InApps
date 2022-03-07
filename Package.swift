// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MoEngageInApp",
    products: [
        .library(
            name: "MoEngageInApp",
            targets: ["MoEngageInAppSPM","MoEngageInApp"]),
    ],
    dependencies: [
        .package(name: "MoEngage-iOS-SDK",url: "https://github.com/moengage/MoEngage-iOS-SDK.git", from: "8.0.0"),
    ],
    targets: [
        .target(name: "MoEngageInAppSPM", dependencies: ["MoEngage-iOS-SDK"], path: "Sources/..",exclude: ["MoEngageInApp.podspec", "README.md","./Frameworks/MoEngageInApps.xcframework", "LICENSE","CHANGELOG.md"]),
        .binaryTarget(name: "MoEngageInApp",path: "./Frameworks/MoEngageInApps.xcframework")
    ]
)
