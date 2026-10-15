/*
 * FUN_180090910 at 180090910
 * undefined __fastcall FUN_180090910(longlong param_1, char param_2)
 * Address ranges: 180090910-1800909aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180090910(longlong param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  
  if ((*(int *)(param_1 + -0xa8) != 0) && (*(char *)(param_1 + -0x94) != param_2)) {
    uVar2 = 0;
    *(char *)(param_1 + -0x94) = param_2;
    if (*(int *)(param_1 + -0xac) != 0) {
      plVar1 = (longlong *)(param_1 + -0xe0);
      do {
        bVar3 = 0;
        FUN_1800ac71c((longlong)plVar1,*(uint *)(param_1 + -0xbc),0);
        FUN_1800ac758((longlong)plVar1,*(uint *)(param_1 + -0xb8),bVar3);
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar2 * *(int *)(param_1 + -0xa4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + -0xac));
    }
  }
  return;
}

