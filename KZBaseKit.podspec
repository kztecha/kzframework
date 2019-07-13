Pod::Spec.new do |s|
  s.name     = 'KZBaseKit'
  s.version  = '0.0.0.23'
  s.license  = {:type => 'MIT',:file => 'License'}
  s.summary  = 'BaseKit'
  s.homepage = 'https://gitlab.com/kztech/KZBaseKit'
  s.authors  = { 'sp' => 'TODO' }
  s.source   = { :git => 'https://github.com/kztecha/kzframework.git', :tag => s.version }
  s.requires_arc = true
  
  #KZBaseKit/**/*.{h,m}'
  #s.public_header_files = 'KZBaseKit/**/*.h'

  
  s.platform     = :ios
  s.platform     = :ios, "8.0"
  s.vendored_frameworks = 'KZBaseKit.framework'
end
