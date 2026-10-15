/*
 * FUN_180005c48 at 180005c48
 * undefined __fastcall FUN_180005c48(void)
 * Address ranges: 180005c48-180005d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005c48(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  if (DAT_18006c8e8 != '\0') {
    local_28[0] = 0x20;
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      if ((&DAT_18006c8c8)[uVar4] != 0) {
        puVar2 = FUN_180015384();
        FUN_18001683c((longlong)puVar2,0,iVar3);
      }
      if ((&DAT_18006c8b0)[uVar4] != 0) {
        puVar2 = FUN_180015384();
        FUN_18001683c((longlong)puVar2,1,iVar3);
      }
      if ((&DAT_18006c8c8)[uVar4] != 0) {
        puVar2 = FUN_180015384();
        bVar1 = FUN_1800167d8((longlong)puVar2,0,iVar3,(ulonglong)DAT_18006c8a4,DAT_18006c8a8,
                              DAT_18006c8a0,local_28);
        if ((int)CONCAT71(extraout_var,bVar1) != 0) {
          (&DAT_18006c8c8)[uVar4] = local_20;
        }
      }
      if ((&DAT_18006c8b0)[uVar4] != 0) {
        puVar2 = FUN_180015384();
        bVar1 = FUN_1800167d8((longlong)puVar2,1,iVar3,(ulonglong)DAT_18006c8a4,DAT_18006c8a8,
                              DAT_18006c8a0,local_28);
        if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
          (&DAT_18006c8b0)[uVar4] = local_20;
        }
      }
      uVar4 = (ulonglong)(iVar3 + 1U);
    } while (iVar3 + 1U < 3);
  }
  return;
}

