Pod::Spec.new do |s|

  s.name         = 'MoEngageInApp'
  s.version      = '6.00.2'
  s.summary      = 'MoEngage InApp Campaigns for iOS'
  s.description  = <<-DESC
                   InApp Messaging are custom views which you can send to a segment of users to show custom messages or give new offers or take to some specific pages. They can be created from your MoEngage dashboard and MOInApp framework enables you to show those InApp campaigns in your iOS Apps.
                   DESC

  s.homepage     = 'https://www.moengage.com'
  s.documentation_url = 'https://developers.moengage.com'
  s.license      = { :type => 'Commercial', :file => 'LICENSE' }
  s.author       = { 'MobileDevs' => 'mobiledevs@moengage.com' }
  s.social_media_url   = 'https://twitter.com/moengage'
  s.ios.deployment_target = '11.0'
  s.tvos.deployment_target = '11.0'

  s.source       = { 
    :git => 'https://github.com/moengage/MoEngage-iOS-InApps.git', 
    :tag => 'inapp-' + s.version.to_s 
  }

  s.ios.vendored_frameworks = 'Frameworks/MoEngageInApps.xcframework'
  s.tvos.vendored_frameworks = 'Frameworks/MoEngageInApps.xcframework'
  s.requires_arc = true
  s.frameworks = 'Foundation', 'UIKit', 'CoreGraphics'
  s.dependency 'MoEngage-iOS-SDK', '>= 9.17.1', '< 9.18.0'
  s.dependency 'MoEngageTriggerEvaluator', '>= 1.01.0', '< 1.02.0'
end
