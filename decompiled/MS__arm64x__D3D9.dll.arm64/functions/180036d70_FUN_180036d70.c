/*
 * FUN_180036d70 at 180036d70
 * undefined FUN_180036d70(void)
 * Address ranges: 180036d70-180036e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036d70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  FUN_1800f0b40(param_1[1],*(undefined4 *)((longlong)param_1 + 0x3c),
                *(undefined8 *)((longlong)param_1 + 0x2c),*(undefined8 *)((longlong)param_1 + 0x34),
                *(undefined8 *)(*(longlong *)(lVar1 + 0xb10) + 0x18),*(undefined8 *)(lVar1 + 0xb78))
  ;
  FUN_1800e8bb8(lVar1,lVar3,0,1,0x400);
  FUN_1800e8038(lVar1);
  FUN_1800e80d8(lVar1);
  (**(code **)(**(longlong **)(lVar1 + 0x688) + 0x78))
            (*(longlong **)(lVar1 + 0x688),lVar3,(int)lVar2,
             *(undefined8 *)((longlong)param_1 + 0x24),
             *(longlong *)((longlong)param_1 + 0x2c) - *(longlong *)((longlong)param_1 + 0x34),
             *(undefined4 *)((longlong)param_1 + 0x3c));
  FUN_1800e8088(lVar1);
  FUN_1800e8bb8(lVar1,lVar3,0,1,0xac3);
  return;
}

