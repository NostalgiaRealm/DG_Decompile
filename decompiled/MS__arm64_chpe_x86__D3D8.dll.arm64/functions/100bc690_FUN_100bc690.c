/*
 * FUN_100bc690 at 100bc690
 * undefined FUN_100bc690(void)
 * Address ranges: 100bc690-100bc85b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc690(int param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_40;
  undefined1 auStack_3c [12];
  
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
  uVar4 = 0x8876086c;
  local_40 = param_2;
  if ((param_3 != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)FUN_10011ab0(param_1 + -0x5798,&local_40), puVar3 != (undefined4 *)0x0)
     ) {
    FUN_10121020(auStack_3c);
    uVar4 = 0;
    *param_3 = *puVar3;
    uVar5 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)(param_3 + 3) = *(undefined8 *)(puVar3 + 3);
    *(undefined8 *)(param_3 + 1) = uVar5;
    uVar5 = *(undefined8 *)(puVar3 + 5);
    *(undefined8 *)(param_3 + 7) = *(undefined8 *)(puVar3 + 7);
    *(undefined8 *)(param_3 + 5) = uVar5;
    uVar5 = *(undefined8 *)(puVar3 + 9);
    *(undefined8 *)(param_3 + 0xb) = *(undefined8 *)(puVar3 + 0xb);
    *(undefined8 *)(param_3 + 9) = uVar5;
    *(undefined8 *)(param_3 + 0xd) = *(undefined8 *)(puVar3 + 0xd);
    param_3[0xf] = puVar3[0xf];
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
    param_3[0x12] = puVar3[0x12];
    param_3[0x13] = puVar3[0x13];
    param_3[0x14] = puVar3[0x14];
    param_3[0x15] = puVar3[0x15];
    param_3[0x16] = puVar3[0x16];
    param_3[0x17] = puVar3[0x17];
    param_3[0x18] = puVar3[0x18];
    param_3[0x19] = puVar3[0x19];
    FUN_10120f70(auStack_3c);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar4;
}

