/*
 * FUN_100296c8 at 100296c8
 * undefined4 __stdcall FUN_100296c8(int param_1, int param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 100296c8-10029758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100296c8(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if (((param_2 == 0) && (param_3 < 0x100)) && (param_3 + param_4 < 0x101)) {
    uVar4 = 0;
    if (param_4 != 0) {
      do {
        iVar2 = uVar4 * 4;
        uVar3 = *(undefined4 *)(param_1 + 0x14 + iVar2 + param_3 * 4);
        *(char *)(param_5 + iVar2) = (char)((uint)uVar3 >> 0x10);
        *(char *)(param_5 + 1 + iVar2) = (char)((uint)uVar3 >> 8);
        *(char *)(param_5 + 2 + iVar2) = (char)uVar3;
        uVar4 = uVar4 + 1;
        *(char *)(param_5 + 3 + iVar2) = (char)((uint)uVar3 >> 0x18);
      } while (uVar4 < param_4);
    }
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

