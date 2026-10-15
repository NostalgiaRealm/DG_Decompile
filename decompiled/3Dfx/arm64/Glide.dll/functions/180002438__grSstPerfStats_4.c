/*
 * _grSstPerfStats@4 at 180002438
 * undefined __cdecl _grSstPerfStats@4(uint * param_1)
 * Address ranges: 180002438-1800024c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstPerfStats_4(uint *param_1)

{
  longlong lVar1;
  undefined1 auStack_40 [12];
  uint local_34;
  uint uStack_30;
  uint local_28;
  uint local_20;
  uint uStack_1c;
  
                    /* 0x2438  76  _grSstPerfStats@4
                       0x2438  237  grSstPerfStats */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  else {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1d8))(*(longlong **)(lVar1 + 0x18),auStack_40);
    *param_1 = local_20 & 0xffffff;
    param_1[1] = uStack_30 & 0xffffff;
    param_1[4] = uStack_1c & 0xffffff;
    param_1[2] = local_28 & 0xffffff;
    param_1[3] = local_34 & 0xffffff;
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

