/*
 * FUN_10062460 at 10062460
 * undefined FUN_10062460(void)
 * Address ranges: 10062460-100625f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10062460(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_w14;
  undefined4 uVar6;
  undefined1 extraout_w15;
  undefined1 uVar7;
  undefined2 uStack_3a;
  
  uVar7 = *(undefined1 *)(param_1 + 0x86);
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xf6b4);
  uVar4 = *(char *)(param_3 + 0x443) != '\0';
  if (*(char *)(param_3 + 0x4a6c) == '\x03') {
    uVar4 = FUN_10094a00(param_3);
    uVar6 = extraout_w14;
    uVar7 = extraout_w15;
  }
  puVar5 = (undefined4 *)FUN_101321c0(0xc0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar5 + 1) = 0;
    puVar5[3] = 0;
    puVar5[8] = param_2;
    puVar5[4] = &PTR_FUN_1015ee44;
    *(ulonglong *)(puVar5 + 9) = CONCAT26(uStack_3a,CONCAT15(uVar7,CONCAT14(uVar4,uVar6)));
    puVar5[0xe] = 0;
    *(undefined8 *)(puVar5 + 0xb) = 0;
    puVar5[0xd] = 0;
    *puVar5 = &PTR_FUN_1015ed20;
    *(undefined8 *)(puVar5 + 0x24) = 0;
    puVar5[6] = &PTR_FUN_1015ed14;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    puVar5[0x22] = &PTR_FUN_1015ee44;
    *(undefined8 *)(puVar5 + 0x26) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    (*(code *)PTR_FUN_1016c0bc)(puVar5 + 0x2a);
    puVar5[7] = param_3;
    puVar5[1] = uVar3;
    puVar5[2] = uVar2;
    if (*(char *)(param_3 + 0x4a6c) == '\x03') {
      FUN_10094a78(puVar5 + 6);
    }
    puVar5[0x28] = puVar5[1];
    puVar5[0x29] = puVar5[2];
  }
  puVar1 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = puVar5 + 6;
  }
  return puVar1;
}

