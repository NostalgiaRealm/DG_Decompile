/*
 * FUN_1000ba6e at 1000ba6e
 * uint __fastcall FUN_1000ba6e(uint * param_1, int * param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 1000ba6e-1000bbd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1000ba6e(uint *param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,int param_8,char param_9)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint *extraout_ECX;
  uint extraout_EDX;
  ulonglong uVar7;
  ulonglong uVar8;
  char cStack0000001f;
  int local_c;
  uint local_8;
  
  uVar2 = param_3;
  uVar7 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  local_8 = (uint)uVar7;
  FUN_1000b9b4((int)param_1,local_8);
  uVar8 = FUN_1000b651(extraout_ECX,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar4 = (uint)uVar8;
  FUN_1000b9b4((int)param_1,uVar4);
  uVar5 = uVar4;
  if ((uVar7 & 0x80000000) == 0) {
    uVar5 = local_8;
  }
  if ((param_9 == '\0') ||
     (cStack0000001f = '\x01', *(short *)(param_3 + 0x11) != *(short *)(param_3 + 5))) {
    cStack0000001f = '\0';
  }
  if (((int)uVar5 < 0) || (cVar3 = FUN_1000b52a(param_3), cVar3 == '\0')) {
    if (cStack0000001f != '\0') goto LAB_1000bb40;
    uVar6 = *(ushort *)(param_3 + 0x11);
  }
  else {
    if (cStack0000001f == '\0') {
      param_3 = uVar4;
      if ((uVar7 & 0x80000000) != 0) {
        param_3 = local_8;
        local_8 = extraout_EDX;
        uVar8 = uVar7;
      }
      goto LAB_1000bb88;
    }
LAB_1000bb40:
    uVar6 = 0xffff;
  }
  uVar5 = FUN_1000b611(param_1,param_2,uVar6,*(char *)(param_3 + 0x10),*(char *)(param_3 + 0x13));
  FUN_10001877(param_2,uVar5,0x100100,0x2902,local_8,(int)(uVar7 >> 0x20),0);
  param_3 = uVar4;
LAB_1000bb88:
  local_c = (int)(uVar8 >> 0x20);
  if (*(char *)(uVar2 + 0x10) == '\x01') {
    param_4 = param_6;
    param_5 = param_7;
  }
  FUN_10001877(param_2,uVar5,param_4,param_5,(uint)uVar8,local_c,param_8);
  if ((param_3 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)param_3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (param_3 & 7));
  }
  if ((local_8 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)local_8 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_8 & 7));
  }
  return uVar5;
}

