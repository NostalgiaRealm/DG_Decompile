/*
 * FUN_1000a511 at 1000a511
 * uint __fastcall FUN_1000a511(uint * param_1, int * param_2, int param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 1000a511-1000a664
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1000a511(uint *param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,int param_8,char param_9)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cStack0000001f;
  uint local_c;
  
  uVar7 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0');
  local_c = (uint)uVar7;
  FUN_1000a457((int)param_1,local_c);
  uVar8 = FUN_1000a138(extraout_ECX,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  uVar3 = (uint)uVar8;
  FUN_1000a457((int)param_1,uVar3);
  uVar4 = uVar3;
  if ((uVar7 & 0x80000000) == 0) {
    uVar4 = local_c;
  }
  if ((param_9 == '\0') ||
     (cStack0000001f = '\x01', *(short *)(param_3 + 0x11) != *(short *)(param_3 + 5))) {
    cStack0000001f = '\0';
  }
  iVar5 = param_3;
  if (((int)uVar4 < 0) || (cVar2 = FUN_1000a038(param_3), iVar5 = extraout_ECX_00, cVar2 == '\0')) {
    if (cStack0000001f != '\0') goto LAB_1000a5d8;
    uVar6 = *(ushort *)(iVar5 + 0x11);
  }
  else {
    if (cStack0000001f == '\0') {
      param_3 = extraout_ECX_00;
      if ((uVar7 & 0x80000000) != 0) {
        local_c = uVar3;
        uVar8 = uVar7;
      }
      goto LAB_1000a61e;
    }
LAB_1000a5d8:
    uVar6 = 0xffff;
  }
  uVar4 = FUN_1000a0fe(param_1,param_2,uVar6,*(char *)(iVar5 + 0x10));
  FUN_1000199d(param_2,uVar4,0x100100,0x2902,local_c,(int)(uVar7 >> 0x20),0);
LAB_1000a61e:
  uVar3 = (uint)uVar8;
  if (*(char *)(param_3 + 0x10) == '\x01') {
    param_4 = param_6;
    param_5 = param_7;
  }
  FUN_1000199d(param_2,uVar4,param_4,param_5,uVar3,(int)(uVar8 >> 0x20),param_8);
  if ((uVar8 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if ((local_c & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)local_c >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_c & 7));
  }
  return uVar4;
}

