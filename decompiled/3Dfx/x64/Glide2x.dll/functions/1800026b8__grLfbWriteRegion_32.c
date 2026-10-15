/*
 * _grLfbWriteRegion@32 at 1800026b8
 * undefined __fastcall _grLfbWriteRegion@32(int param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, undefined8 param_8)
 * Address ranges: 1800026b8-180002716
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteRegion_32
               (int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,uint param_6,
               int param_7,undefined8 param_8)

{
  undefined *puVar1;
  
                    /* 0x26b8  59  _grLfbWriteRegion@32
                       0x26b8  216  grLfbWriteRegion */
  puVar1 = FUN_180015044();
  FUN_1800164f0((longlong)puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0
               );
  return;
}

