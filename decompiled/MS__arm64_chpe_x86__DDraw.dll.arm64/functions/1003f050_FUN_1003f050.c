/*
 * FUN_1003f050 at 1003f050
 * undefined FUN_1003f050(void)
 * Address ranges: 1003f050-1003f253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1003f050(int param_1,int param_2,uint param_3,int param_4,undefined4 *param_5,int param_6,
            char param_7)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  undefined4 uVar8;
  
  iVar6 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar6 == 0) {
    FUN_10001c10(0);
  }
  uVar8 = 0x80070057;
  if (((param_5 != (undefined4 *)0x0) &&
      (((param_4 != 0 || ((param_7 != '\0' && ((param_3 >> 3 & 1) == 0)))) &&
       (*param_5 = 0, param_6 == 0)))) &&
     ((((param_3 & 0xfffff800) == 0 && (uVar8 = 0x80004001, (param_3 & 0x30) == 0)) &&
      (uVar8 = 0x887600d4, *(char *)(param_1 + 0x108) != '\0')))) {
    uVar8 = 0x8007000e;
    puVar7 = (undefined4 *)FUN_100913c0(0x414);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &PTR_FUN_100b2654;
      puVar7[1] = param_2;
      puVar7[2] = 1;
      puVar7[3] = param_1;
      puVar7[4] = param_3;
      if (param_2 != 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(param_2);
      }
      FUN_10041740(puVar7,0,0,0x100,param_4);
      piVar1 = (int *)(param_1 + 0x134);
      puVar2 = (uint *)(param_1 + 0x13c);
      puVar3 = (uint *)(param_1 + 0x138);
      uVar4 = *puVar2;
      if (*puVar3 == uVar4) {
        uVar5 = uVar4 << 1;
        if (uVar4 == 0) {
          uVar5 = 0x10;
        }
        iVar6 = uVar5 * 4;
        if (uVar5 >> 0x1e != 0) {
          iVar6 = -1;
        }
        iVar6 = FUN_100914b0(iVar6);
        if (iVar6 == 0) {
          FUN_10041230(puVar7);
          FUN_10091460(puVar7,0x414);
          goto LAB_1003f208;
        }
        FUN_100917a0(iVar6,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
        FUN_100914d0(*piVar1);
        *piVar1 = iVar6;
        *puVar2 = uVar5;
      }
      uVar8 = 0;
      *(undefined4 **)(*piVar1 + *puVar3 * 4) = puVar7;
      *puVar3 = *puVar3 + 1;
      *param_5 = puVar7;
    }
  }
LAB_1003f208:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar8;
}

