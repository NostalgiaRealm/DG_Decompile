/*
 * FUN_180066d68 at 180066d68
 * undefined __fastcall FUN_180066d68(undefined8 param_1, uint * param_2, uint param_3, uint param_4, uint param_5, uint param_6, longlong * param_7, ulonglong param_8, char param_9, char param_10)
 * Address ranges: 180066d68-180067002
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180066d68(undefined8 param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,longlong *param_7,ulonglong param_8,char param_9,char param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = param_5;
  uVar6 = (param_8 & 0xffffffffffff) >> ((char)param_3 * '\x03' & 0x3fU);
  puVar4 = (uint *)0x0;
  param_5 = 0;
  uVar5 = (uint)uVar6 & 7;
  uVar3 = 0;
  if ((uVar6 & 7) != 0) {
    if (((param_8 >> 0x33 & 1) == 0) || (bVar1 = true, uVar5 != 1)) {
      bVar1 = false;
    }
    uVar3 = param_5;
    if (((byte)(param_8 >> 0x3e) & 1) == 0 && !bVar1) {
      uVar3 = param_4;
      if (param_9 != '\0') {
        puVar4 = param_2;
        FUN_1800edbe0(param_2,param_7,0x32,(ulonglong)uVar2);
        uVar3 = param_5;
      }
    }
    else {
      puVar4 = param_2;
      FUN_1800edbe0(param_2,param_7,0xe,(ulonglong)uVar2);
      if (!bVar1) {
        puVar4 = param_2;
        FUN_1800edbe0(param_2,param_7,0x37,(ulonglong)uVar2);
      }
      if (param_9 != '\0') {
        puVar4 = param_2;
        FUN_1800edbe0(param_2,param_7,0,(ulonglong)uVar2);
      }
    }
  }
  FUN_180065668(puVar4,param_2,uVar5,param_3,uVar2,param_6,param_8,param_7,uVar3);
  if (((uVar6 & 7) != 0) && (param_10 != '\0')) {
    FUN_1800edbe0(param_2,param_7,0x38,(ulonglong)uVar2);
  }
  return;
}

