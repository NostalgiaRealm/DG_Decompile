/*
 * FUN_140010000 at 140010000
 * undefined * __fastcall FUN_140010000(undefined4 param_1, undefined8 param_2)
 * Address ranges: 140010000-140010483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140010000(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if ((DAT_14002d3f0 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 1;
    DAT_14002d388 = (longlong *)FUN_140011240(0x100,'\0');
    _DAT_14002d390 = "D3D11 FL10.0";
    _DAT_14002d378 = &PTR_FUN_140028ac8;
    _DAT_14002d398 = 0;
    DAT_14002d380 = 0;
  }
  if ((DAT_14002d3f0 & 2) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 2;
    DAT_14002d338 = (longlong *)FUN_140011240(0x101,'\0');
    _DAT_14002d340 = "D3D11 FL10.1";
    _DAT_14002d328 = &PTR_FUN_140028ac8;
    _DAT_14002d348 = 0;
    DAT_14002d330 = 0;
  }
  if ((DAT_14002d3f0 & 4) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 4;
    DAT_14002d3d8 = (longlong *)FUN_140011240(0x110,'\0');
    _DAT_14002d3e0 = "D3D11 FL11.0";
    _DAT_14002d3c8 = &PTR_FUN_140028ac8;
    _DAT_14002d3e8 = 0;
    DAT_14002d3d0 = 0;
  }
  if ((DAT_14002d3f0 & 8) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 8;
    DAT_14002d360 = (longlong *)FUN_140011240(0x101,'\x01');
    _DAT_14002d368 = "D3D11 WARP FL10.1";
    _DAT_14002d350 = &PTR_FUN_140028ac8;
    _DAT_14002d370 = 0;
    DAT_14002d358 = 0;
  }
  if ((DAT_14002d3f0 & 0x10) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 0x10;
    _DAT_14002d3b0 = FUN_140012d90(0x110);
    _DAT_14002d3b8 = "D3D12 FL11.0";
    _DAT_14002d3a0 = &PTR_FUN_140028ac8;
    _DAT_14002d3c0 = 0;
    DAT_14002d3a8 = 0;
  }
  if ((DAT_14002d3f0 & 0x20) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 0x20;
    _DAT_14002d310 = FUN_140012d90(0x120);
    _DAT_14002d318 = "D3D12 FL12.0";
    _DAT_14002d300 = &PTR_FUN_140028ac8;
    _DAT_14002d320 = 0;
    DAT_14002d308 = 0;
  }
  switch(param_1) {
  case 0:
    puVar3 = &DAT_14002d3c8;
    if (DAT_14002d3eb == '\0') {
      if (DAT_14002d3e8 == '\0') {
        uVar1 = (**(code **)(*DAT_14002d3d8 + 8))();
        _DAT_14002d3e8 = CONCAT31(CONCAT21(uRam000000014002d3ea,uVar1),1);
      }
      if ((DAT_14002d3e9 != '\0') && (cVar2 = (**(code **)(*DAT_14002d3d8 + 0x10))(), cVar2 != '\0')
         ) {
        (**(code **)(*DAT_14002d3d8 + 0x18))();
        _DAT_14002d3e8 = CONCAT13(1,_DAT_14002d3e8);
        DAT_14002d3d0 = param_2;
        return &DAT_14002d3c8;
      }
      if (DAT_14002d3eb == '\0') {
        puVar3 = &DAT_14002d328;
        if (DAT_14002d34b == '\0') {
          if (DAT_14002d348 == '\0') {
            uVar1 = (**(code **)(*DAT_14002d338 + 8))();
            _DAT_14002d348 = CONCAT31(CONCAT21(uRam000000014002d34a,uVar1),1);
          }
          if ((DAT_14002d349 != '\0') &&
             (cVar2 = (**(code **)(*DAT_14002d338 + 0x10))(), cVar2 != '\0')) {
            (**(code **)(*DAT_14002d338 + 0x18))();
            _DAT_14002d348 = CONCAT13(1,_DAT_14002d348);
            DAT_14002d330 = param_2;
            return &DAT_14002d328;
          }
          if (DAT_14002d34b == '\0') {
            puVar3 = &DAT_14002d378;
            if (DAT_14002d39b == '\0') {
              if (DAT_14002d398 == '\0') {
                uVar1 = (**(code **)(*DAT_14002d388 + 8))();
                _DAT_14002d398 = CONCAT31(CONCAT21(uRam000000014002d39a,uVar1),1);
              }
              if ((DAT_14002d399 != '\0') &&
                 (cVar2 = (**(code **)(*DAT_14002d388 + 0x10))(), cVar2 != '\0')) {
                (**(code **)(*DAT_14002d388 + 0x18))();
                _DAT_14002d398 = CONCAT13(1,_DAT_14002d398);
                DAT_14002d380 = param_2;
                return &DAT_14002d378;
              }
              if (DAT_14002d39b == '\0') {
                puVar3 = &DAT_14002d350;
                if (DAT_14002d373 == '\0') {
                  if (DAT_14002d370 == '\0') {
                    uVar1 = (**(code **)(*DAT_14002d360 + 8))();
                    _DAT_14002d370 = CONCAT31(CONCAT21(uRam000000014002d372,uVar1),1);
                  }
                  if ((DAT_14002d371 != '\0') &&
                     (cVar2 = (**(code **)(*DAT_14002d360 + 0x10))(), cVar2 != '\0')) {
                    (**(code **)(*DAT_14002d360 + 0x18))();
                    _DAT_14002d370 = CONCAT13(1,_DAT_14002d370);
                    DAT_14002d358 = param_2;
                    return &DAT_14002d350;
                  }
                  if (DAT_14002d373 == '\0') {
                    return (undefined *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 1:
    DAT_14002d380 = param_2;
    return &DAT_14002d378;
  case 2:
    DAT_14002d330 = param_2;
    return &DAT_14002d328;
  case 3:
    DAT_14002d358 = param_2;
    return &DAT_14002d350;
  case 4:
    DAT_14002d3d0 = param_2;
    return &DAT_14002d3c8;
  case 5:
    DAT_14002d3a8 = param_2;
    return &DAT_14002d3a0;
  case 6:
    puVar3 = &DAT_14002d300;
    break;
  default:
    goto switchD_1400101e1_default;
  }
  *(undefined8 *)(puVar3 + 8) = param_2;
switchD_1400101e1_default:
  return puVar3;
}

