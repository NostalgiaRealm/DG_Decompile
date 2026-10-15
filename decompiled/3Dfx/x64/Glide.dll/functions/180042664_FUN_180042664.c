/*
 * FUN_180042664 at 180042664
 * undefined __fastcall FUN_180042664(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180042664-1800426fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042664(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = param_2 & 0xffffffff;
  *(undefined8 *)(*param_1 + uVar3 * 0x48) = param_3;
  lVar5 = *param_1;
  uVar2 = param_4[1];
  puVar1 = (undefined8 *)(lVar5 + 8 + uVar3 * 0x48);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  uVar2 = param_4[3];
  puVar1 = (undefined8 *)(lVar5 + 0x18 + uVar3 * 0x48);
  *puVar1 = param_4[2];
  puVar1[1] = uVar2;
  uVar2 = param_4[5];
  puVar1 = (undefined8 *)(lVar5 + 0x28 + uVar3 * 0x48);
  *puVar1 = param_4[4];
  puVar1[1] = uVar2;
  *(undefined4 *)(lVar5 + 0x38 + uVar3 * 0x48) = *(undefined4 *)(param_4 + 6);
  puVar4 = (undefined1 *)FUN_18005db9c(0x2d0);
  if (puVar4 != (undefined1 *)0x0) {
    FUN_18005f814(puVar4,0,0x2d0);
    lVar5 = 0;
    do {
      lVar6 = lVar5 + 1;
      *(undefined4 *)(puVar4 + lVar5 * 0x24 + 0x1c) = 0xffffffff;
      lVar5 = lVar6;
    } while (lVar6 != 0x14);
  }
  *(undefined1 **)(*param_1 + 0x40 + uVar3 * 0x48) = puVar4;
  return;
}

