/*
 * FUN_10022afd at 10022afd
 * undefined __fastcall FUN_10022afd(int param_1)
 * Address ranges: 10022afd-10022bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022afd(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint *local_8;
  
  if (*(char *)(DAT_1006c210 + 0x7e6) != '\0') {
    BVar1 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar1 == 0) {
      FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    local_c = &local_10;
    local_8 = (uint *)CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = (uint *)(in_FPUControlWord & 0xf0ff | 0x23f);
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      do {
        iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x118) + uVar3 * 4) + 0x38))();
        if (((*(uint *)(iVar2 + 0x68) & 0x4000800) == 0) &&
           ((*(uint *)(iVar2 + 0x6c) & 0x20010) == 0)) {
          FUN_10033228(*(void **)(*(int *)(param_1 + 0x118) + uVar3 * 4));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x11c));
    }
    local_8 = &local_10;
    *(undefined1 *)(param_1 + 0xf9) = 1;
    LeaveCriticalSection(DAT_1006c254);
  }
  return;
}

