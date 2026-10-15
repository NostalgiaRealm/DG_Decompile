/*
 * FUN_180063868 at 180063868
 * undefined __fastcall FUN_180063868(longlong * param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 180063868-180063904
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180063868(longlong *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  puVar4 = param_4;
  puVar6 = (undefined4 *)((longlong)param_1 + ((ulonglong)(param_2 * 4) + 0x1548) * 4);
  for (uVar3 = (ulonglong)((param_3 - param_2) * 4); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = 8;
  if (param_2 < 9) {
    uVar1 = param_2;
  }
  uVar2 = uVar1;
  uVar5 = 8;
  if (param_3 < 9) {
    uVar5 = param_3;
  }
  while (uVar2 < uVar5) {
                    /* WARNING: Read-only address (ram,0x000180107bc0) is written */
                    /* WARNING: Read-only address (ram,0x000180107ce0) is written */
    auVar7 = minps(*(undefined1 (*) [16])(param_4 + (uVar2 - uVar1) * 4),_DAT_180107bc0);
    auVar7 = maxps(auVar7,_DAT_180107ce0);
    *(undefined1 (*) [16])((longlong)param_1 + (ulonglong)(uVar2 * 4) * 4 + 0x54a0) = auVar7;
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Read-only address (ram,0x000180107bc0) is written */
                    /* WARNING: Read-only address (ram,0x000180107ce0) is written */
  *(undefined1 *)((longlong)param_1 + 0xf6b6) = 1;
  return;
}

