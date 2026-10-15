/*
 * FUN_100bc550 at 100bc550
 * undefined FUN_100bc550(void)
 * Address ranges: 100bc550-100bc687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc550(int param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar2 == 0) {
      FUN_10006560(0);
    }
  }
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    FUN_10121020(auStack_40);
    uVar4 = *(undefined8 *)(param_1 + -0x57dc);
    param_2[1] = *(undefined8 *)(param_1 + -0x57d4);
    *param_2 = uVar4;
    uVar4 = *(undefined8 *)(param_1 + -0x57cc);
    uVar3 = 0;
    param_2[3] = *(undefined8 *)(param_1 + -0x57c4);
    param_2[2] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + -0x57bc);
    param_2[5] = *(undefined8 *)(param_1 + -0x57b4);
    param_2[4] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + -0x57ac);
    param_2[7] = *(undefined8 *)(param_1 + -0x57a4);
    param_2[6] = uVar4;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + -0x579c);
    FUN_10120f70(auStack_40);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

