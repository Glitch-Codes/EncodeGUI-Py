/****************************************************************************
 * Copyright (C) 2022 DaGoose
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/

#include "args.hpp"

/// <summary>
/// Enables vapoursynth script input.
/// </summary>
/// <returns>String representation of the argument.</returns>
QString Argument::vs() {
	return(QString("-f vapoursynth"));
}

/// <summary>
/// Configures the pipe for vspipe.exe.
/// </summary>
/// <returns>String representation of the argument.</returns>
QString Argument::vsPipe() {
	return(QString("-c y4m"));
}