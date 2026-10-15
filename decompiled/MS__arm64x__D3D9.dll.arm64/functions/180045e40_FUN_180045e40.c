/*
 * FUN_180045e40 at 180045e40
 * undefined FUN_180045e40(void)
 * Address ranges: 180045e40-180045ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045e40(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  uVar6 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar3 = param_1[4];
  FUN_18003dea0(lVar4);
  FUN_180058af8(lVar4,(int)lVar2,uVar6,1,0,uVar5,0,uVar1,1,(char)lVar3,0);
  if (*(longlong *)((longlong)param_1 + 0x24) != 0) {
    FUN_1800f3550(*(longlong *)(lVar4 + 0xf6e0) + 0x17f0,*(undefined4 *)((longlong)param_1 + 0x34),
                  *(longlong *)((longlong)param_1 + 0x24),*(undefined8 *)((longlong)param_1 + 0x2c))
    ;
  }
  return;
}

