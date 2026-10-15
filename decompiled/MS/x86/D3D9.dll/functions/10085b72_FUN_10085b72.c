/*
 * FUN_10085b72 at 10085b72
 * bool __fastcall FUN_10085b72(void * param_1)
 * Address ranges: 10085b72-10085cfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10085b72(void *param_1)

{
  char cVar1;
  uint *extraout_EDX;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_1008f5b4(param_1,&local_1c);
  cVar1 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
  if (cVar1 == '\0') {
    puVar2 = extraout_EDX;
    if (*(int *)((int)param_1 + 0x148) == 0) {
      FUN_10081718((void *)((int)param_1 + 0x13c),*(uint *)((int)param_1 + 0x14),
                   *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),*extraout_EDX,1,
                   local_1c,local_18,0,0x1688,0x1688,local_10,0,'\0','\x01',0,0);
      puVar2 = (uint *)((int)param_1 + 0x24);
    }
    local_20 = (uint *)((int)param_1 + 0x14);
    local_24 = (uint *)((int)param_1 + 0x18);
    local_28 = (uint *)((int)param_1 + 0x20);
    if (*(int *)((int)param_1 + 0x184) != 0) goto LAB_10085cc5;
    local_c = 0;
    local_14 = 0;
    uVar6 = *puVar2;
    uVar5 = *local_28;
    uVar4 = *local_24;
    uVar3 = *local_20;
  }
  else {
    FUN_10081718((void *)((int)param_1 + 0x13c),*(uint *)((int)param_1 + 0x14),
                 *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),*extraout_EDX,1,
                 local_1c,local_18,local_14,0x1688,0x1688,0,0,'\0','\x01',0,0);
    local_10 = 0;
    uVar6 = *(uint *)((int)param_1 + 0x24);
    uVar5 = *(uint *)((int)param_1 + 0x20);
    uVar4 = *(uint *)((int)param_1 + 0x18);
    uVar3 = *(uint *)((int)param_1 + 0x14);
  }
  FUN_10081718((void *)((int)param_1 + 0x178),uVar3,uVar4,uVar5,uVar6,1,local_1c,local_18,local_14,
               0x1688,0x1688,local_10,local_c,'\x01','\x01',0,0);
LAB_10085cc5:
  local_2c = (void *)((int)param_1 + 0x178);
  if ((*(int *)((int)param_1 + 0x148) == 0) || (*(int *)((int)param_1 + 0x184) == 0)) {
    FUN_10081bba((void *)((int)param_1 + 0x13c),1,1);
    FUN_10081bba(local_2c,1,1);
  }
  return *(int *)((int)param_1 + 0x148) != 0;
}

