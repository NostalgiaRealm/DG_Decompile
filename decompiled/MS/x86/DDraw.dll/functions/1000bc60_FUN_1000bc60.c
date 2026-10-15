/*
 * FUN_1000bc60 at 1000bc60
 * bool __fastcall FUN_1000bc60(void * param_1)
 * Address ranges: 1000bc60-1000bd97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1000bc60(void *param_1)

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
  cVar2 = FUN_10006992(*(int *)((int)param_1 + 0x34));
  if (cVar2 == '\0') {
    if (*(int *)((int)param_1 + 0x1c) == 0) {
      iVar4 = FUN_10060bfe(0x400);
      *(int *)((int)param_1 + 8) = iVar4;
      if (iVar4 == 0) goto LAB_1000bd79;
    }
    cVar2 = FUN_1000b5ba(param_1,'\x01');
    bVar3 = cVar2 != '\0';
    *(char *)((int)param_1 + 0xd8) = cVar2;
  }
  else {
    FUN_100221f0(param_1,&local_1c);
    uVar1 = *(uint *)((int)param_1 + 0x24);
    if (*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40)) ==
        0xa000) {
      cVar2 = FUN_1000ac9c(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18)
                           ,*(uint *)((int)param_1 + 0x20),uVar1,1,local_1c,local_18,0,0,0,8,0,0,0,
                           '\0','\0');
      if (cVar2 != '\0') {
LAB_1000bd3e:
        *(undefined1 *)((int)param_1 + 0xd8) = 1;
      }
    }
    else {
      cVar2 = FUN_1000ac9c(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18)
                           ,*(uint *)((int)param_1 + 0x20),uVar1,1,local_1c,local_18,0,local_c,0,
                           0x48,0,-(uint)(uVar1 != 1) & 4,0,'\0','\0');
      if (cVar2 != '\0') {
        if (uVar1 == 1) goto LAB_1000bd3e;
        bVar3 = FUN_1000ad9a((void *)((int)param_1 + 0xac),*(int **)((int)param_1 + 0x54),local_18,
                             extraout_ECX,0,'\x01');
        *(bool *)((int)param_1 + 0xd8) = bVar3;
        FUN_1000b505(param_1);
      }
    }
    if (*(char *)((int)param_1 + 0xd8) != '\0') {
      return true;
    }
    FUN_1000ae4f((void *)((int)param_1 + 0x48),*(uint *)((int)param_1 + 0x20),
                 *(uint *)((int)param_1 + 0x24));
LAB_1000bd79:
    bVar3 = false;
  }
  return bVar3;
}

