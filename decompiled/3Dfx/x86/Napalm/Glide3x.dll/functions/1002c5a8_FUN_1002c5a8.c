/*
 * FUN_1002c5a8 at 1002c5a8
 * undefined __fastcall FUN_1002c5a8(int param_1, int * param_2, int * param_3, int param_4, char param_5)
 * Address ranges: 1002c5a8-1002c6e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c5a8(int param_1,int *param_2,int *param_3,int param_4,char param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  ushort local_14 [4];
  int local_c;
  int *local_8;
  
  puVar5 = (undefined2 *)(((param_5 != '\0') - 1 & 0xffffffc8) + 0xe8 + (int)param_2);
  uVar6 = 0;
  local_14[0] = puVar5[param_4 * 7];
  local_14[1] = puVar5[param_4 * 7 + 1];
  local_14[2] = puVar5[param_4 * 7 + 2];
  local_14[3] = puVar5[param_4 * 7 + 3];
  local_c = param_1;
  local_8 = param_2;
  do {
    uVar2 = local_14[uVar6] & 0xf0;
    if (((uVar2 == 0x10) || (uVar2 == 0x30)) || (uVar2 == 0x20)) {
      uVar2 = local_14[uVar6];
      uVar4 = (uint)((byte)uVar2 & 0xf);
      if (((param_2[uVar4 + 0x1b] == 0) && (param_2[uVar4 + 0x1e] == 0)) &&
         (param_2[uVar4 + 0x21] == 0)) {
        cVar1 = *(char *)((int)param_2 + uVar4 + 0xa5);
        FUN_10026077(local_c,uVar4,param_2,param_3,*(char *)((int)param_2 + uVar4 + 0xa8) != -1,
                     *(char *)((int)param_2 + uVar4 + 0xab) != -1,cVar1 != -1);
        param_2 = local_8;
        if ((cVar1 != -1) && (iVar3 = uVar4 * 0x250, *(int *)(local_c + 0x1ec + iVar3) != 0)) {
          uVar4 = (uint)(ushort)((CONCAT11((byte)uVar2,cVar1) & 0xfff) >> 8 | 0x2010);
          FUN_10029bad(puVar5,uVar4,(float)uVar4,0,(float)(iVar3 + 0x1d0),iVar3 + 0x1e0,local_8,
                       param_3);
          param_2 = local_8;
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  return;
}

