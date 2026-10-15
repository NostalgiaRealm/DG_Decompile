/*
 * FUN_1006f978 at 1006f978
 * bool __fastcall FUN_1006f978(void * param_1)
 * Address ranges: 1006f978-1006fb02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1006f978(void *param_1)

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
  
  FUN_1007923c(param_1,&local_1c);
  cVar1 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
  if (cVar1 == '\0') {
    puVar2 = extraout_EDX;
    if (*(int *)((int)param_1 + 0x148) == 0) {
      FUN_1006b825((void *)((int)param_1 + 0x13c),*(uint *)((int)param_1 + 0x14),
                   *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),*extraout_EDX,1,
                   local_1c,local_18,0,0x1688,0x1688,local_10,0,'\0','\x01',0,0);
      puVar2 = (uint *)((int)param_1 + 0x24);
    }
    local_20 = (uint *)((int)param_1 + 0x14);
    local_24 = (uint *)((int)param_1 + 0x18);
    local_28 = (uint *)((int)param_1 + 0x20);
    if (*(int *)((int)param_1 + 0x184) != 0) goto LAB_1006facb;
    local_c = 0;
    local_14 = 0;
    uVar6 = *puVar2;
    uVar5 = *local_28;
    uVar4 = *local_24;
    uVar3 = *local_20;
  }
  else {
    FUN_1006b825((void *)((int)param_1 + 0x13c),*(uint *)((int)param_1 + 0x14),
                 *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),*extraout_EDX,1,
                 local_1c,local_18,local_14,0x1688,0x1688,0,0,'\0','\x01',0,0);
    local_10 = 0;
    uVar6 = *(uint *)((int)param_1 + 0x24);
    uVar5 = *(uint *)((int)param_1 + 0x20);
    uVar4 = *(uint *)((int)param_1 + 0x18);
    uVar3 = *(uint *)((int)param_1 + 0x14);
  }
  FUN_1006b825((void *)((int)param_1 + 0x178),uVar3,uVar4,uVar5,uVar6,1,local_1c,local_18,local_14,
               0x1688,0x1688,local_10,local_c,'\x01','\x01',0,0);
LAB_1006facb:
  local_2c = (void *)((int)param_1 + 0x178);
  if ((*(int *)((int)param_1 + 0x148) == 0) || (*(int *)((int)param_1 + 0x184) == 0)) {
    FUN_1006bcc0((void *)((int)param_1 + 0x13c),1,1);
    FUN_1006bcc0(local_2c,1,1);
  }
  return *(int *)((int)param_1 + 0x148) != 0;
}

