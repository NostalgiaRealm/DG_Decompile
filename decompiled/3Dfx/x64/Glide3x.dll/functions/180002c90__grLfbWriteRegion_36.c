/*
 * _grLfbWriteRegion@36 at 180002c90
 * undefined __fastcall _grLfbWriteRegion@36(int param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, int param_8, undefined8 param_9)
 * Address ranges: 180002c90-180002cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteRegion_36
               (int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,uint param_6,
               int param_7,int param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined1 uVar2;
  
                    /* 0x2c90  57  _grLfbWriteRegion@36
                       0x2c90  157  grLfbWriteRegion */
  uVar2 = param_7 != 0;
  puVar1 = FUN_1800069ac();
  FUN_180007fa8((longlong)puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,
                uVar2,0);
  return;
}

