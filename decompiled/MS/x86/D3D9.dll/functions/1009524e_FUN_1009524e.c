/*
 * FUN_1009524e at 1009524e
 * undefined4 __stdcall FUN_1009524e(int param_1, int param_2, int param_3, uint param_4, uint param_5, int param_6, uint param_7)
 * Address ranges: 1009524e-1009535c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1009524e(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,uint param_7)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar4 = param_7;
  if ((param_5 != 0) &&
     (((param_7 == 0 || (param_7 == 1)) && (bVar5 = FUN_10096ec2(iVar3 - 0x66b4), bVar5 != 0)))) {
    iVar7 = 0;
    pvVar1 = (void *)(param_5 - 0x68);
    if (*(uint *)(iVar3 + 0x5bd4) != 0) {
      param_7 = *(uint *)(iVar3 + 0x5bd4);
      iVar7 = FUN_1009c1d2((void *)(iVar3 + 0x78),&param_7);
    }
    if (param_6 == 0) {
      param_5 = *(uint *)(param_5 - 0x30);
      iVar6 = 0;
      if (param_5 != 0) {
        iVar6 = FUN_10095c7a((void *)(iVar3 + -0x59c0),&param_5);
      }
    }
    else {
      if ((iVar7 == 0) || (*(char *)(*(int *)(iVar7 + 0x85c) + 1) != '\x03')) {
        cVar2 = *(char *)(param_6 + 0x278);
      }
      else {
        cVar2 = *(char *)(param_6 + 0x279);
      }
      iVar6 = param_6 + 0x14;
      if (cVar2 == '\0') {
        iVar6 = 0;
      }
    }
    if (iVar6 != 0) {
      local_8 = FUN_10005593((void *)(iVar3 + -0x66b4),param_2,param_3,param_4,pvVar1,iVar3 + 0x6dc,
                             *(int *)(iVar3 + 0x5c24),iVar6,uVar4,iVar7);
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return local_8;
}

