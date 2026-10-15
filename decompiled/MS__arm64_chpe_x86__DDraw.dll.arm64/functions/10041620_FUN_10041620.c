/*
 * FUN_10041620 at 10041620
 * undefined FUN_10041620(void)
 * Address ranges: 10041620-1004171b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10041620(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar3 = 0x80070057;
  if ((param_3 < 0x100 && param_2 == 0) && (param_3 + param_4 < 0x101)) {
    uVar2 = 0;
    if (param_4 != 0) {
      iVar1 = 0;
      do {
        uVar3 = *(undefined4 *)(param_1 + (param_3 + 5) * 4 + iVar1);
        uVar2 = uVar2 + 1;
        *(char *)(iVar1 + param_5) = (char)((uint)uVar3 >> 0x10);
        *(char *)(param_5 + 1 + iVar1) = (char)((uint)uVar3 >> 8);
        *(char *)(param_5 + 2 + iVar1) = (char)uVar3;
        *(char *)(param_5 + 3 + iVar1) = (char)((uint)uVar3 >> 0x18);
        iVar1 = iVar1 + 4;
      } while (uVar2 < param_4);
    }
    uVar3 = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

