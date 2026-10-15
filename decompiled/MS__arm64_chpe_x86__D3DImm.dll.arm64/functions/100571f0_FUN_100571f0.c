/*
 * FUN_100571f0 at 100571f0
 * undefined FUN_100571f0(void)
 * Address ranges: 100571f0-1005739f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100571f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_c0;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [128];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x80070057;
  local_c0 = param_2;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_10005bc0(param_1 + 0x14c,&local_c0);
    FUN_10096840(auStack_bc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(param_1 + 0x184);
      FUN_10005c60(param_1 + 0x14c,&local_c0,puVar2);
      uVar3 = FUN_10007770(param_1,auStack_b0,puVar2);
      FUN_10005ac0(param_1 + 0x15c,&local_c0,uVar3);
    }
    *param_3 = *puVar2;
    uVar4 = *(undefined8 *)(puVar2 + 1);
    *(undefined8 *)(param_3 + 3) = *(undefined8 *)(puVar2 + 3);
    *(undefined8 *)(param_3 + 1) = uVar4;
    uVar4 = *(undefined8 *)(puVar2 + 5);
    *(undefined8 *)(param_3 + 7) = *(undefined8 *)(puVar2 + 7);
    *(undefined8 *)(param_3 + 5) = uVar4;
    uVar4 = *(undefined8 *)(puVar2 + 9);
    *(undefined8 *)(param_3 + 0xb) = *(undefined8 *)(puVar2 + 0xb);
    *(undefined8 *)(param_3 + 9) = uVar4;
    *(undefined8 *)(param_3 + 0xd) = *(undefined8 *)(puVar2 + 0xd);
    param_3[0xf] = puVar2[0xf];
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
    param_3[0x12] = puVar2[0x12];
    param_3[0x13] = puVar2[0x13];
    param_3[0x14] = puVar2[0x14];
    param_3[0x15] = puVar2[0x15];
    param_3[0x16] = puVar2[0x16];
    param_3[0x17] = puVar2[0x17];
    uVar3 = 0;
    param_3[0x18] = puVar2[0x18];
    param_3[0x19] = puVar2[0x19];
    FUN_10096790(auStack_bc);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

