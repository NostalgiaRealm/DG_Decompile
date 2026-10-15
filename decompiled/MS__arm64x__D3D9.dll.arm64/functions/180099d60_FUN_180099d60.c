/*
 * FUN_180099d60 at 180099d60
 * undefined FUN_180099d60(void)
 * Address ranges: 180099d60-180099e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099d60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  (**(code **)(*plVar1 + 0x38))
            (plVar1,lVar2,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],
             *(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
             *(undefined8 *)((longlong)param_1 + 0x2c),*(undefined4 *)((longlong)param_1 + 0x34),
             param_1[7],(int)param_1[8]);
  FUN_1800e6028(plVar1,lVar3,0);
  if (*(longlong *)((longlong)param_1 + 0x44) != 0) {
    FUN_1800f3550(plVar1 + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x358 + 0x41e,
                  *(undefined4 *)((longlong)param_1 + 0x54),*(longlong *)((longlong)param_1 + 0x44),
                  *(undefined8 *)((longlong)param_1 + 0x4c));
  }
  return;
}

