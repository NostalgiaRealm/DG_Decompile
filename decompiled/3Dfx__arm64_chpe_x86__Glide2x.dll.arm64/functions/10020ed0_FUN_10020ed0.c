/*
 * FUN_10020ed0 at 10020ed0
 * undefined FUN_10020ed0(void)
 * Address ranges: 10020ed0-10020faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020ed0(int param_1,char param_2)

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
    uVar4 = FUN_10056c50(*piVar1 + 0x1640,param_1 + 0x31bc);
    *puVar2 = uVar4;
  }
  if ((*(char *)(param_1 + 0x3236) != '\0') || (param_2 != '\0')) {
    FUN_10060b60(*(undefined4 *)(*piVar1 + 0x1304),*puVar2);
    iVar3 = *(int *)(*piVar1 + 0x1304);
    FUN_100595a8(*(undefined4 *)(iVar3 + 0x8e4),*puVar2,*(undefined4 *)(iVar3 + 0x8e0),iVar3,
                 *(undefined8 *)(iVar3 + 0x938));
    *(undefined1 *)(param_1 + 0x3236) = 0;
  }
  return;
}

