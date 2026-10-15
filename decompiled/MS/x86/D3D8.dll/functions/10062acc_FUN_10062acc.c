/*
 * FUN_10062acc at 10062acc
 * bool __fastcall FUN_10062acc(void * param_1)
 * Address ranges: 10062acc-10062c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10062acc(void *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 local_1c;
  int local_18;
  int local_c;
  
  *(undefined1 *)((int)param_1 + 0xd8) = 0;
  cVar2 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
  if (cVar2 == '\0') {
    if (*(int *)((int)param_1 + 0x1c) == 0) {
      iVar4 = FUN_100ad4a9(0x400);
      *(int *)((int)param_1 + 8) = iVar4;
      if (iVar4 == 0) goto LAB_10062be5;
    }
    cVar2 = FUN_10062426(param_1,'\x01');
    bVar3 = cVar2 != '\0';
    *(char *)((int)param_1 + 0xd8) = cVar2;
  }
  else {
    FUN_1007923c(param_1,&local_1c);
    uVar1 = *(uint *)((int)param_1 + 0x24);
    if (*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40)) ==
        0xa000) {
      cVar2 = FUN_10061b08(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18)
                           ,*(uint *)((int)param_1 + 0x20),uVar1,1,local_1c,local_18,0,0,0,8,0,0,0,
                           '\0','\0');
      if (cVar2 != '\0') {
LAB_10062baa:
        *(undefined1 *)((int)param_1 + 0xd8) = 1;
      }
    }
    else {
      cVar2 = FUN_10061b08(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18)
                           ,*(uint *)((int)param_1 + 0x20),uVar1,1,local_1c,local_18,0,local_c,0,
                           0x48,0,-(uint)(uVar1 != 1) & 4,0,'\0','\0');
      if (cVar2 != '\0') {
        if (uVar1 == 1) goto LAB_10062baa;
        bVar3 = FUN_10061c06((void *)((int)param_1 + 0xac),*(int **)((int)param_1 + 0x54),local_18,
                             extraout_ECX,0,'\x01');
        *(bool *)((int)param_1 + 0xd8) = bVar3;
        FUN_10062371(param_1);
      }
    }
    if (*(char *)((int)param_1 + 0xd8) != '\0') {
      return true;
    }
    FUN_10061cbb((void *)((int)param_1 + 0x48),*(uint *)((int)param_1 + 0x20),
                 *(uint *)((int)param_1 + 0x24));
LAB_10062be5:
    bVar3 = false;
  }
  return bVar3;
}

