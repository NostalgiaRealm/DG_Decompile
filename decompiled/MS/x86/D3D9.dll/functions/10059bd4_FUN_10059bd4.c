/*
 * FUN_10059bd4 at 10059bd4
 * undefined4 __stdcall FUN_10059bd4(int param_1, uint param_2, int param_3, int param_4, byte param_5)
 * Address ranges: 10059bd4-10059c81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10059bd4(int param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  
  uVar3 = 0;
  uVar1 = (uint)param_5 << 8;
  if (param_3 != -1) {
    uVar4 = (ushort)uVar1;
    if ((param_4 == 2) || (uVar1 = (uint)param_5 << 8, param_4 == 1)) {
      uVar1 = (uint)CONCAT11(param_5,*(ushort *)(param_3 * 0x10 + 4 + param_1) == (uVar4 | 0x30));
    }
    if (param_4 == 3) {
      uVar1 = uVar1 & 0xff;
      if (*(ushort *)(param_3 * 0x10 + 6 + param_1) == (uVar4 | 0x30)) {
        uVar1 = 1;
      }
    }
    if ((char)uVar1 != '\0') {
      uVar1 = (1 << ((byte)param_3 & 0x1f)) - 1;
      if ((param_2 & uVar1) == 0) {
        uVar3 = 1;
      }
      else {
        iVar2 = 0;
        if (0 < param_3) {
          do {
            uVar1 = CONCAT31((int3)((uint)(iVar2 * 2) >> 8),*(undefined1 *)(param_1 + iVar2 * 0x10))
                    & 0xfffffff0;
            if ((char)uVar1 == '\x10') goto LAB_10059c79;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_3);
        }
        if (iVar2 == param_3) {
          uVar1 = 0;
          *(undefined2 *)(param_1 + iVar2 * 0x10) = 0;
        }
      }
    }
  }
LAB_10059c79:
  return CONCAT31((int3)(uVar1 >> 8),uVar3);
}

