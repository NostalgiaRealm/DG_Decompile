/*
 * FUN_10031cb7 at 10031cb7
 * uint __fastcall FUN_10031cb7(void * param_1, int param_2, byte param_3)
 * Address ranges: 10031cb7-10031d76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10031cb7(void *param_1,int param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_4c [8];
  uint local_2c [5];
  int local_18;
  void *local_c;
  
  iVar2 = *(int *)((int)param_1 + 0x40);
  puVar6 = (uint *)(param_2 + 0x48);
  puVar7 = local_2c;
  local_c = param_1;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (param_3 == 0) {
    if ((local_2c[1] & 0x4400) == 0x4400) {
      if ((local_2c[3] == 0x18) && (local_2c[4] == 8)) {
        local_2c[3] = 0x20;
      }
    }
    else if ((((local_2c[1] & 0x4400) == 0x400) && (local_2c[3] == 0x20)) && (local_18 != -1)) {
      local_2c[3] = 0x18;
    }
  }
  pcVar3 = (&PTR_DAT_1006b5c8)[iVar2 * 0x6a];
  cVar1 = *pcVar3;
  iVar5 = 0;
  while( true ) {
    if (cVar1 == -1) {
      return 0xffffffff;
    }
    FUN_10024c76(local_c,local_4c,(uint)(byte)pcVar3[iVar5]);
    if ((local_4c[0] != 0) && (uVar4 = FUN_10031a59(local_2c,local_4c,param_3), (char)uVar4 != '\0')
       ) break;
    pcVar3 = (&PTR_DAT_1006b5c8)[iVar2 * 0x6a];
    cVar1 = pcVar3[iVar5 + 1];
    iVar5 = iVar5 + 1;
  }
  return (uint)(byte)(&PTR_DAT_1006b5c8)[iVar2 * 0x6a][iVar5];
}

