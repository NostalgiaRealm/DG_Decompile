/*
 * FUN_140011c60 at 140011c60
 * undefined8 * __cdecl FUN_140011c60(undefined4 param_1, undefined8 param_2)
 * Address ranges: 140011c60-140011faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140011c60(undefined4 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((DAT_14002d3f0 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 1;
    DAT_14002d388 = FUN_1400131e8(0x100,0);
    DAT_14002d378 = &PTR_FUN_140028b28;
    DAT_14002d390 = "D3D11 FL10.0";
    DAT_14002d398 = 0;
    DAT_14002d380 = 0;
  }
  if ((DAT_14002d3f0 >> 1 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 2;
    DAT_14002d338 = FUN_1400131e8(0x101,0);
    DAT_14002d328 = &PTR_FUN_140028b28;
    DAT_14002d340 = "D3D11 FL10.1";
    DAT_14002d348 = 0;
    DAT_14002d330 = 0;
  }
  if ((DAT_14002d3f0 >> 2 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 4;
    DAT_14002d3d8 = FUN_1400131e8(0x110,0);
    DAT_14002d3c8 = &PTR_FUN_140028b28;
    DAT_14002d3e0 = "D3D11 FL11.0";
    DAT_14002d3e8 = 0;
    DAT_14002d3d0 = 0;
  }
  if ((DAT_14002d3f0 >> 3 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 8;
    DAT_14002d360 = FUN_1400131e8(0x101,1);
    DAT_14002d350 = &PTR_FUN_140028b28;
    DAT_14002d368 = "D3D11 WARP FL10.1";
    DAT_14002d370 = 0;
    DAT_14002d358 = 0;
  }
  if ((DAT_14002d3f0 >> 4 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 0x10;
    if ((DAT_14002efa0 & 1) == 0) {
      DAT_14002efa0 = DAT_14002efa0 | 1;
      FUN_140013aa8(&DAT_14002eb10);
      DAT_14002eb10 = &PTR_FUN_140028ec0;
      DAT_14002ef90 = 0;
      DAT_14002ef98 = 0xb000;
      DAT_14002ef88 = 0;
      FUN_140025270(FUN_140025420);
    }
    if ((DAT_14002efa0 >> 1 & 1) == 0) {
      DAT_14002efa0 = DAT_14002efa0 | 2;
      FUN_140013aa8(&DAT_14002e680);
      DAT_14002e680 = &PTR_FUN_140028ec0;
      DAT_14002eb00 = 0;
      DAT_14002eb08 = 0xc000;
      DAT_14002eaf8 = 0;
      FUN_140025270(FUN_1400253e8);
    }
    DAT_14002d3a0 = &PTR_FUN_140028b28;
    DAT_14002d3b0 = &DAT_14002eb10;
    DAT_14002d3b8 = "D3D12 FL11.0";
    DAT_14002d3c0 = 0;
    DAT_14002d3a8 = 0;
  }
  if ((DAT_14002d3f0 >> 5 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 0x20;
    if ((DAT_14002efa0 & 1) == 0) {
      DAT_14002efa0 = DAT_14002efa0 | 1;
      FUN_140013aa8(&DAT_14002eb10);
      DAT_14002eb10 = &PTR_FUN_140028ec0;
      DAT_14002ef90 = 0;
      DAT_14002ef98 = 0xb000;
      DAT_14002ef88 = 0;
      FUN_140025270(FUN_140025420);
    }
    if ((DAT_14002efa0 >> 1 & 1) == 0) {
      DAT_14002efa0 = DAT_14002efa0 | 2;
      FUN_140013aa8(&DAT_14002e680);
      DAT_14002e680 = &PTR_FUN_140028ec0;
      DAT_14002eb00 = 0;
      DAT_14002eb08 = 0xc000;
      DAT_14002eaf8 = 0;
      FUN_140025270(FUN_1400253e8);
    }
    DAT_14002d300 = &PTR_FUN_140028b28;
    DAT_14002d310 = &DAT_14002e680;
    DAT_14002d318 = "D3D12 FL12.0";
    DAT_14002d320 = 0;
    DAT_14002d308 = 0;
  }
  puVar2 = (undefined8 *)0x0;
  puVar3 = &DAT_14002d3c8;
  switch(param_1) {
  case 0:
    bVar1 = FUN_140011ff8(0x14002d3c8);
    puVar3 = &DAT_14002d3c8;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_140011ff8(0x14002d328);
      if ((bVar1 & 1) != 0) goto switchD_140011ef8_caseD_2;
      bVar1 = FUN_140011ff8(0x14002d378);
      puVar3 = &DAT_14002d378;
      if ((bVar1 & 1) == 0) {
        bVar1 = FUN_140011ff8(0x14002d350);
        if ((bVar1 & 1) == 0) {
          return (undefined8 *)0x0;
        }
        goto LAB_140011f6c;
      }
    }
  case 4:
switchD_140011ef8_caseD_4:
    puVar2 = puVar3;
    puVar3 = puVar2 + 1;
    break;
  case 1:
    puVar3 = &DAT_14002d378;
    goto switchD_140011ef8_caseD_4;
  case 2:
switchD_140011ef8_caseD_2:
    puVar2 = &DAT_14002d328;
    puVar3 = &DAT_14002d330;
    break;
  case 3:
LAB_140011f6c:
    puVar2 = &DAT_14002d350;
    puVar3 = &DAT_14002d358;
    break;
  case 5:
    puVar2 = &DAT_14002d3a0;
    goto LAB_140011f8c;
  case 6:
    puVar2 = &DAT_14002d300;
LAB_140011f8c:
    puVar3 = puVar2 + 1;
    break;
  default:
    goto switchD_140011ef8_default;
  }
  *puVar3 = param_2;
switchD_140011ef8_default:
  return puVar2;
}

