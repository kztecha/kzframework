Pod::Spec.new do |s|
  s.name     = 'KZLongLink'
  s.version  = '.1.0.7'
  s.license  = {:type => 'MIT',:file => 'License'}
  s.summary  = 'socket,httpserver'
  s.homepage = 'https://gitlab.com/kztech/kzlonglink.git'
  s.authors  = { 'sp' => 'yimo' }
  s.source   = { :git => 'https://gitlab.com/kztech/kzlonglink.git', :tag => s.version, :submodules => true }
  s.requires_arc = true
  
  #KZLongLink/**/*.{h,m}'
  #s.public_header_files = 'KZLongLink/**/*.h'

  s.dependency "KZBaseKit"
  s.dependency "KZProtocolService"
  s.dependency "CocoaAsyncSocket"
  s.platform     = :ios
  s.platform     = :ios, "8.0"
  s.vendored_frameworks = 'KZLongLink.framework'
end
