/*
 * FUN_100b6a60 at 100b6a60
 * undefined FUN_100b6a60(void)
 * Address ranges: 100b6a60-100b6bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b6a60(int param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [16];
  
  uVar6 = 0x8876086c;
  if (param_3 != (undefined8 *)0x0) {
    if ((param_2 < *(uint *)(param_1 + -0x4dd0)) &&
       (param_2 + param_4 <= *(uint *)(param_1 + -0x4dd0))) {
      if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
        bVar2 = false;
        *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
      }
      else {
        bVar2 = true;
        iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
        if (iVar3 == 0) {
          FUN_10006560(0);
        }
      }
      if (*(char *)(param_1 + -0x56c0) == '\0') {
        FUN_10121020(auStack_50);
        FUN_100b5650(param_1 + -0x58e0,param_2,param_3,param_4);
        FUN_10120f70(auStack_50);
      }
      else {
        puVar1 = (undefined8 *)
                 (*(int *)(*(int *)(param_1 + -0x56d0) + *(int *)(param_1 + -0x56c4) * 4) +
                  param_2 * 0x10 + 0x4a54);
        uVar4 = 0;
        if ((param_4 & 0x3fffffff) != 0) {
          do {
            uVar5 = *param_3;
            uVar4 = uVar4 + 1;
            param_3 = param_3 + 1;
            *puVar1 = uVar5;
            puVar1 = puVar1 + 1;
          } while (uVar4 < (param_4 & 0x3fffffff) << 1);
        }
        if (param_4 != 0) {
          FUN_100ff690(param_1 + param_2 + -0x530,1,param_4);
        }
      }
      uVar6 = 0;
      if (bVar2) {
        (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
      }
      else {
        *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
      }
    }
  }
  return uVar6;
}

