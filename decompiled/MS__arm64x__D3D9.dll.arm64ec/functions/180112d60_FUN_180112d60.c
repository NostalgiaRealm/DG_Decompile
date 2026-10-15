/*
 * FUN_180112d60 at 180112d60
 * undefined FUN_180112d60(void)
 * Address ranges: 180112d60-180112e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180112d60(uint *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint local_30 [4];
  
  FUN_1801060c0(param_2,0x8810200012010,*param_1 | 0x80000000,0xffffffff,
                (ulonglong)*(ushort *)(param_3 + 0x10) << 4,0);
  FUN_180113dc0(param_1,param_2,0);
  uVar1 = 0x750100030000;
  if (*(char *)(param_3 + 1) == '\0') {
    uVar1 = 0x740100030000;
  }
  FUN_1801060c0(param_2,uVar1,0xffffffff,0xffffffff,0,0);
  iVar2 = (int)param_2[1] - (int)*param_2;
  FUN_1801060c0(param_2,0xe80100010000,0xffffffff,0xffffffff,0,0);
  lVar3 = FUN_180112290(param_1,*(undefined2 *)(param_3 + 0x10));
  local_30[0] = (int)param_2[1] - (int)*param_2 | (uint)((char)param_1[0x86] != '\0') << 0x1f;
  FUN_180108518(lVar3 + 8,local_30);
  *(char *)(*param_2 + (ulonglong)(iVar2 - 1)) = ((char)param_2[1] - (char)*param_2) - (char)iVar2;
  return;
}

