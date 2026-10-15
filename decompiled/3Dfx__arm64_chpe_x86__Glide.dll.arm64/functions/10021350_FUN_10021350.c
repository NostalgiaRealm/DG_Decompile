/*
 * FUN_10021350 at 10021350
 * undefined FUN_10021350(void)
 * Address ranges: 10021350-1002142f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021350(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(param_1 + 0x322c);
  if (*(char *)(param_1 + 0x3236) != '\0') {
    *(undefined4 *)(param_1 + 0x31dc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x31ec) = 2;
    uVar4 = FUN_100570d0(*piVar1 + 0x1640,param_1 + 0x31bc);
    *puVar2 = uVar4;
  }
  if ((*(char *)(param_1 + 0x3236) != '\0') || (param_2 != '\0')) {
    FUN_10060fe0(*(undefined4 *)(*piVar1 + 0x1304),*puVar2);
    iVar3 = *(int *)(*piVar1 + 0x1304);
    FUN_10059a28(*(undefined4 *)(iVar3 + 0x8e4),*puVar2,*(undefined4 *)(iVar3 + 0x8e0),iVar3,
                 *(undefined8 *)(iVar3 + 0x938));
    *(undefined1 *)(param_1 + 0x3236) = 0;
  }
  return;
}

