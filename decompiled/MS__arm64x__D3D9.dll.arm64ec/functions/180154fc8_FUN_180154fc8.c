/*
 * FUN_180154fc8 at 180154fc8
 * undefined FUN_180154fc8(void)
 * Address ranges: 180154fc8-18015507b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180154fc8(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar2 = param_1[1];
  uVar5 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar3 = param_1[4];
  FUN_18014c730(lVar6);
  FUN_180168ce0(lVar6,(int)lVar2,uVar5,1,0,uVar4,0,uVar1,1,(char)lVar3,0);
  if (*(longlong *)((longlong)param_1 + 0x24) != 0) {
    FUN_180212050(*(longlong *)(lVar6 + 0xf6e0) + 0x17f0,*(undefined4 *)((longlong)param_1 + 0x34),
                  *(longlong *)((longlong)param_1 + 0x24),*(undefined8 *)((longlong)param_1 + 0x2c))
    ;
  }
  return;
}

