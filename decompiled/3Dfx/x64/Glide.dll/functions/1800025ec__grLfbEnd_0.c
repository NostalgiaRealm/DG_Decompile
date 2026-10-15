/*
 * _grLfbEnd@0 at 1800025ec
 * undefined __fastcall _grLfbEnd@0(void)
 * Address ranges: 1800025ec-180002683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbEnd_0(void)

{
  undefined *puVar1;
  int iVar2;
  ulonglong uVar3;
  
                    /* 0x25ec  56  _grLfbEnd@0
                       0x25ec  217  grLfbEnd */
  if (DAT_18006c8e8 != '\0') {
    uVar3 = 0;
    do {
      iVar2 = (int)uVar3;
      if ((&DAT_18006c8c8)[uVar3] != 0) {
        puVar1 = FUN_180015384();
        FUN_18001683c((longlong)puVar1,0,iVar2);
        if (DAT_18006c8e0 != iVar2) {
          (&DAT_18006c8c8)[uVar3] = 0;
        }
      }
      if ((&DAT_18006c8b0)[uVar3] != 0) {
        puVar1 = FUN_180015384();
        FUN_18001683c((longlong)puVar1,1,iVar2);
        if (DAT_18006c8e4 != iVar2) {
          (&DAT_18006c8b0)[uVar3] = 0;
        }
      }
      uVar3 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < 3);
    DAT_18006c8e8 = '\0';
  }
  return;
}

