/* Type information for config/rs6000/rs6000.c.
   Copyright (C) 2004-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_hash_table_builtin_hasher_ (void *x_p)
{
  hash_table<builtin_hasher> * const x = (hash_table<builtin_hasher> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct builtin_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct builtin_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_ggc_mx_builtin_hash_struct (void *x_p)
{
  struct builtin_hash_struct * const x = (struct builtin_hash_struct *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).type);
    }
}

void
gt_ggc_mx (struct builtin_hash_struct& x_r ATTRIBUTE_UNUSED)
{
  struct builtin_hash_struct * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_9tree_node ((*x).type);
}

void
gt_ggc_mx (struct builtin_hash_struct *& x)
{
  if (x)
    gt_ggc_mx_builtin_hash_struct ((void *) x);
}

void
gt_ggc_mx_hash_table_toc_hasher_ (void *x_p)
{
  hash_table<toc_hasher> * const x = (hash_table<toc_hasher> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct toc_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct toc_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_ggc_mx_toc_hash_struct (void *x_p)
{
  struct toc_hash_struct * const x = (struct toc_hash_struct *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).key);
    }
}

void
gt_ggc_mx (struct toc_hash_struct& x_r ATTRIBUTE_UNUSED)
{
  struct toc_hash_struct * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_7rtx_def ((*x).key);
}

void
gt_ggc_mx (struct toc_hash_struct *& x)
{
  if (x)
    gt_ggc_mx_toc_hash_struct ((void *) x);
}

void
gt_ggc_mx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).sdmode_stack_slot);
      gt_ggc_m_7rtx_def ((*x).split_stack_arg_pointer);
    }
}

void
gt_pch_nx_hash_table_builtin_hasher_ (void *x_p)
{
  hash_table<builtin_hasher> * const x = (hash_table<builtin_hasher> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_26hash_table_builtin_hasher_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct builtin_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct builtin_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_builtin_hash_struct (void *x_p)
{
  struct builtin_hash_struct * const x = (struct builtin_hash_struct *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19builtin_hash_struct))
    {
      gt_pch_n_9tree_node ((*x).type);
    }
}

void
gt_pch_nx (struct builtin_hash_struct& x_r ATTRIBUTE_UNUSED)
{
  struct builtin_hash_struct * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_9tree_node ((*x).type);
}

void
gt_pch_nx (struct builtin_hash_struct *& x)
{
  if (x)
    gt_pch_nx_builtin_hash_struct ((void *) x);
}

void
gt_pch_nx_hash_table_toc_hasher_ (void *x_p)
{
  hash_table<toc_hasher> * const x = (hash_table<toc_hasher> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_22hash_table_toc_hasher_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct toc_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct toc_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_toc_hash_struct (void *x_p)
{
  struct toc_hash_struct * const x = (struct toc_hash_struct *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15toc_hash_struct))
    {
      gt_pch_n_7rtx_def ((*x).key);
    }
}

void
gt_pch_nx (struct toc_hash_struct& x_r ATTRIBUTE_UNUSED)
{
  struct toc_hash_struct * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_7rtx_def ((*x).key);
}

void
gt_pch_nx (struct toc_hash_struct *& x)
{
  if (x)
    gt_pch_nx_toc_hash_struct ((void *) x);
}

void
gt_pch_nx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16machine_function))
    {
      gt_pch_n_7rtx_def ((*x).sdmode_stack_slot);
      gt_pch_n_7rtx_def ((*x).split_stack_arg_pointer);
    }
}

void
gt_pch_p_26hash_table_builtin_hasher_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<builtin_hasher> * x ATTRIBUTE_UNUSED = (struct hash_table<builtin_hasher> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct builtin_hasher* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

void
gt_pch_p_19builtin_hash_struct (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct builtin_hash_struct * x ATTRIBUTE_UNUSED = (struct builtin_hash_struct *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
}

void
gt_pch_nx (struct builtin_hash_struct* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).type), cookie);
}

void
gt_pch_p_22hash_table_toc_hasher_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<toc_hasher> * x ATTRIBUTE_UNUSED = (struct hash_table<toc_hasher> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct toc_hasher* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

void
gt_pch_p_15toc_hash_struct (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct toc_hash_struct * x ATTRIBUTE_UNUSED = (struct toc_hash_struct *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).key), cookie);
}

void
gt_pch_nx (struct toc_hash_struct* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).key), cookie);
}

void
gt_pch_p_16machine_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct machine_function * x ATTRIBUTE_UNUSED = (struct machine_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).sdmode_stack_slot), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).split_stack_arg_pointer), cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_rs6000_h[] = {
  {
    &rs6000_previous_fndecl,
    1,
    sizeof (rs6000_previous_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &morestack_ref,
    1,
    sizeof (morestack_ref),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &savres_routine_syms[0][0],
    1 * (N_SAVRES_REGISTERS) * (12),
    sizeof (savres_routine_syms[0][0]),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &rs6000_got_symbol,
    1,
    sizeof (rs6000_got_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &rs6000_tls_symbol,
    1,
    sizeof (rs6000_tls_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &builtin_hash_table,
    1,
    sizeof (builtin_hash_table),
    &gt_ggc_mx_hash_table_builtin_hasher_,
    &gt_pch_nx_hash_table_builtin_hasher_
  },
  {
    &toc_hash_table,
    1,
    sizeof (toc_hash_table),
    &gt_ggc_mx_hash_table_toc_hasher_,
    &gt_pch_nx_hash_table_toc_hasher_
  },
  {
    &builtin_mode_to_type[0][0],
    1 * (MAX_MACHINE_MODE) * (2),
    sizeof (builtin_mode_to_type[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &toc_section,
    1,
    sizeof (toc_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &sdata2_section,
    1,
    sizeof (sdata2_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &read_only_private_data_section,
    1,
    sizeof (read_only_private_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &tls_private_data_section,
    1,
    sizeof (tls_private_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &tls_data_section,
    1,
    sizeof (tls_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &private_data_section,
    1,
    sizeof (private_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &read_only_data_section,
    1,
    sizeof (read_only_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &altivec_builtin_mask_for_load,
    1,
    sizeof (altivec_builtin_mask_for_load),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rs_gt_rs6000_h[] = {
  { &set, 1, sizeof (set), NULL, NULL },
  { &common_mode_defined, 1, sizeof (common_mode_defined), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

