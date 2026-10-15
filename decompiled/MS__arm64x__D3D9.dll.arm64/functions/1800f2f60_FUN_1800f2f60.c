/*
 * FUN_1800f2f60 at 1800f2f60
 * undefined FUN_1800f2f60(void)
 * Address ranges: 1800f2f60-1800f2fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f2f60(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800f2f8c);
    (*pcVar2)();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
  }
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1800fba78(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                          *(undefined4 *)(param_2 + 0x24));
    if ((int)uVar3 != -1) {
      *(uint *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + uVar4;
    }
  }
  return uVar3;
}

