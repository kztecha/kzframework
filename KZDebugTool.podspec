#pod ipc spec KZBaseKit.podspec >> KZBaseKit.podspec.json
Pod::Spec.new do |s|
  s.name     = 'KZDebugTool'
  s.version  = '10.1.1.9'
  s.license  = {:type => 'MIT',:file => 'License'}
  s.summary  = 'To Debug'
  s.homepage = 'https://gitlab.com/kztech/KZDebugTool.git'
  s.authors  = { 'sp' => 'yimo' }
  s.source   = { :git => 'https://github.com/kztecha/kzframework.git', :tag => s.version }
  s.requires_arc = true
  
  #KZDebugTool/**/*.{h,m}'
  #s.public_header_files = 'KZDebugTool/**/*.h'
  s.frameworks = "Foundation", "UIKit"
  
  s.platform     = :ios
  s.platform     = :ios, "8.0"
  s.dependency "KZBaseKit"
  s.dependency "KZProtocolService"
  s.dependency "KZLongLink"
  s.dependency "SSZipArchive"
  #s.resource_bundles = { 'KZDebugTool' => 'Resources/Settings.bundle'}
  s.vendored_frameworks = 'KZDebugTool.framework'
end
