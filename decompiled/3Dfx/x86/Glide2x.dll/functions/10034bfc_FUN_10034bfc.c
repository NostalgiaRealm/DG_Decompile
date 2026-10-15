/*
 * FUN_10034bfc at 10034bfc
 * undefined __fastcall FUN_10034bfc(int param_1, int * param_2, int * param_3, int param_4, char param_5)
 * Address ranges: 10034bfc-10034cc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10034bfc(int param_1,int *param_2,int *param_3,int param_4,char param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort local_c [4];
  
  iVar2 = param_4 * 0xe;
  iVar3 = ((param_5 != '\0') - 1 & 0xffffffc8) + 0xe8;
  uVar5 = 0;
  local_c[1] = *(undefined2 *)((int)param_2 + iVar2 + 2 + iVar3);
  local_c[0] = *(undefined2 *)((int)param_2 + iVar2 + iVar3);
  local_c[3] = *(undefined2 *)((int)param_2 + iVar2 + 6 + iVar3);
  local_c[2] = *(undefined2 *)((int)param_2 + iVar2 + 4 + iVar3);
  do {
    uVar1 = local_c[uVar5] & 0xf0;
    if ((((uVar1 == 0x10) || (uVar1 == 0x30)) || (uVar1 == 0x20)) &&
       (((uVar4 = (byte)local_c[uVar5] & 0xf, param_2[uVar4 + 0x1b] == 0 &&
         (param_2[uVar4 + 0x1e] == 0)) && (param_2[uVar4 + 0x21] == 0)))) {
      FUN_1002f6bb(param_1,uVar4,param_2,param_3,*(char *)((int)param_2 + uVar4 + 0xa8) != -1,
                   *(char *)((int)param_2 + uVar4 + 0xab) != -1,
                   *(char *)((int)param_2 + uVar4 + 0xa5) != -1);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return;
}

